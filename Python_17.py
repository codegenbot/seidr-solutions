```Python
def parse_music(music_string: str) -> list:
    if not isinstance(music_string, str):
        return []

    music_string = music_string.replace(" ", "")

    if len(music_string) < 3 or not set(music_string[:3]).issubset({"o", "|", "."}):
        return ["Invalid input"]

    music_string = music_string.replace(" ", "")

    if not music_string.isalnum():
        return ["Invalid input"]

    music_list = []
    i = 0
    while i < len(music_string):
        if not music_string[i : i + 1].isalnum():
            i += 1
            continue

        if music_string[i:i+2] == "o|":
            music_list.append(2)
            i += 2
        elif music_string[i:i+3] == "| .|":
            music_list.append(1)
            i += 3
        elif music_string[i:i+5] == "..|.||.|":
            music_list.append(0.5)
            i += 5
        elif music_string[i:i+2] == "o o":
            if not music_string[i+1].isalnum() or not music_string[i+1:i+2] == "|":
                return ["Invalid input"]
            music_list.append(4)
            i += 2
        elif music_string[i:i+3] == "o o|":
            music_list.append(4)
            i += 3

    return music_list


while True:
    try:
        input_str = input("Enter a music string: ")
        if not isinstance(input_str, str):
            raise Exception
        break
    except Exception:
        print("Invalid input. Please enter a string.")
print(parse_music(input_str))
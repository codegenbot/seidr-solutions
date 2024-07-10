def parse_music(music_data: str):
    return music_data.splitlines()

music_input = ""
while True:
    line = input()
    if line:
        music_input += line + "\n"
    else:
        break

print(parse_music(music_input))
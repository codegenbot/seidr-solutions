def parse_music(music_data: str):
    return music_data.splitlines()

music_input = ""
while True:
    line = input()
    if not line:
        break
    music_input += line + "\n"

print(parse_music(music_input))
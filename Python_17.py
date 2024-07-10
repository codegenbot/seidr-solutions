def parse_music(music_data: str):
    lines = []
    for line in music_data.splitlines():
        if not line.strip():
            break
        lines.append(line)
    return lines

music_data = ''
while True:
    line = input()
    if not line.strip():
        break
    music_data += line + '\n'

print(parse_music(music_data))
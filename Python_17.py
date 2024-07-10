def parse_music(music_data: str):
    lines = []
    for line in music_data.splitlines():
        if not line.strip():
            break
        lines.append(line)
    return lines

music_data = ''
while True:
    try:
        line = input()
    except EOFError:
        break
    if not line.strip():
        break
    music_data += line + '\n'

print(parse_music(music_data))
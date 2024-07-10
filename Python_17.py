import sys

def parse_music(music_data: str):
    lines = []
    for line in music_data.splitlines():
        if not line.strip():
            break
        lines.append(line)
    return lines

music_data = ''
for line in sys.stdin:
    line = line.rstrip()
    if not line.strip():
        break
    music_data += line + '\n'

print(parse_music(music_data))
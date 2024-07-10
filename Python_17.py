import sys

def parse_music(music_data: str):
    lines = []
    for line in music_data.splitlines():
        if not line.strip():
            break
        lines.append(line)
    return lines

try:
    music_data = sys.stdin.read()
    print(parse_music(music_data))
except EOFError:
    pass
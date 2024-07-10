import sys

def parse_music(music_data: str):
    lines = []
    for line in music_data.splitlines():
        lines.append(line)
    return lines

music_data = sys.stdin.read()

print(parse_music(music_data))
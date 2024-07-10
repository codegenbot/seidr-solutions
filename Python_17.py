import sys

def parse_music(music_data: str):
    lines = []
    for line in music_data.splitlines():
        if not line.strip():
            break
        lines.append(line)
    return lines

music_data = sys.stdin.readline().rstrip()

print(parse_music(music_data))
import sys

music_input = sys.stdin.readline().strip()

def parse_music(music_data: str):
    return music_data.split('\n')

print(parse_music(music_input))
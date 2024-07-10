import sys

def parse_music(music_data: str):
    return music_data.splitlines()

music_input = sys.stdin.read()
print(parse_music(music_input))
import sys

while True:
    music_input = sys.stdin.readline().strip()
    if not music_input:
        break
    result = parse_music(music_input)
    if result is not None:
        print(result)
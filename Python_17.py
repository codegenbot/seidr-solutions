import sys

for music_input in sys.stdin:
    music_input = music_input.strip()
    if not music_input:
        break
    result = parse_music(music_input)
    if result is not None:
        print(result)
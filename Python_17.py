import sys

def parse_music(music_input):
    if music_input.startswith("Title:"):
        return music_input.replace("Title:", "").strip()
    return None

while True:
    try:
        music_input = sys.stdin.readline().strip()
        result = parse_music(music_input)
        if result is not None:
            print(result)
    except (EOFError, KeyboardInterrupt):
        break
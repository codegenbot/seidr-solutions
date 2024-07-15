import sys

def parse_music(music_input):
    if music_input.startswith("Title:"):
        return music_input.replace("Title:", "").strip()
    return None

for music_input in sys.stdin:
    result = parse_music(music_input.strip())
    if result is not None:
        print(result)
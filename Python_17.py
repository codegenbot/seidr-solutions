def parse_music(music_input):
    if music_input.startswith("Title:"):
        return music_input.replace("Title:", "").strip()
    return None

try:
    while True:
        music_input = input()
        result = parse_music(music_input.strip())
        if result is not None:
            print(result)
except EOFError:
    pass
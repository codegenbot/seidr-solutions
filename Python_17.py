def parse_music(music_input):
    if music_input.startswith("Title:"):
        return music_input.replace("Title:", "").strip()
    return None


while True:
    music_input = input("Enter music title: ").strip()
    if not music_input:
        break
    result = parse_music(music_input)
    if result is not None:
        print(result)
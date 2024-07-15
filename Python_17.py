def parse_music(music_input):
    # your parsing logic here
    pass

while True:
    music_input = input().strip()
    if not music_input:
        break
    result = parse_music(music_input)
    if result is not None:
        print(result)
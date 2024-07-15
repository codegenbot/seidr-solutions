try:
    while True:
        music_input = input().rstrip()
        if music_input == '':
            break
        result = parse_music(music_input)
        print(result)
except EOFError:
    pass
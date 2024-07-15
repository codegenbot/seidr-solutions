while True:
    try:
        music_input = input().rstrip()
        if not music_input:
            break
        result = parse_music(music_input)
        print(result)
    except (EOFError, KeyboardInterrupt):
        break
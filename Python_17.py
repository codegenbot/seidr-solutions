try:
    music_input = input().rstrip()
    result = parse_music(music_input)
    print(result)
except EOFError:
    pass
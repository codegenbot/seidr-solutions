def parse_music(music_data: str):
    return music_data.splitlines()


music_input = input()
print(parse_music(music_input))
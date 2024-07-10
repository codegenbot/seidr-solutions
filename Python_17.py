def parse_music(music_data: str):
    return music_data.strip().splitlines()


music_input = input("Enter music data:\n")
print(parse_music(music_input))
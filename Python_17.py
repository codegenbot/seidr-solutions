print("Enter music data:")
music_input = input()

def parse_music(music_data: str):
    return music_data.split('\n')

print(parse_music(music_input))
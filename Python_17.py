print("Enter music data:")
music_input = ""
while True:
    line = input()
    if line:
        music_input += line
    else:
        break

def parse_music(music_data: str):
    return music_data.split('\n')

print(parse_music(music_input))
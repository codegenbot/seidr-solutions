print("Enter music data:")
music_input = ""
try:
    while True:
        line = input()
        if line:
            music_input += line + '\n'
        else:
            break
except EOFError:
    pass

def parse_music(music_data: str):
    return music_data.rstrip('\n').split('\n')

print(parse_music(music_input))
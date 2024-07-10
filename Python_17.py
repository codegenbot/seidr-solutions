def parse_music(music_data: str):
    return music_data.strip().split("\n")


music_input = ""
for line in sys.stdin:
    music_input += line

print(parse_music(music_input))
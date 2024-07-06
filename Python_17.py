```
def parse_music(music_file: str) -> dict:
    music_info = {}
    with open(music_file, 'r') as file:
        for line in file:
            key, value = line.strip().split(':')
            music_info[key] = value
    return music_info
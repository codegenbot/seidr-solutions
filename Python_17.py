import sys

print("Enter music data:")
music_input = sys.stdin.readlines()

def parse_music(music_data: List[str]) -> List[str]:
    return [data.strip() for data in music_data]

print(parse_music(music_input))
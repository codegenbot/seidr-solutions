```
def parse_music(music_string: str) -> List[int]:
    note_lengths = {'o': [4], 'o|': [2], '.|': [1]}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            j, k = i+1, min(i+3, len(music_string))
            for note in note_lengths['.|']:
                result.extend([note]*((k-j)//2 + (k-j)%2))
            i += 2
        else:
            j, k = i-1, i+1
            for note in note_lengths.get(music_string[j:k], [4]):
                result.append(note[0])
            i += 2
    return result
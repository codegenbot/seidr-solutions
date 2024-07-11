Here is the correct code:

```python
def parse_music(music_string: str) -> List[int]:
    beats = [4, 2, 1]
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+3] == 'o.o.o':
            result.extend(beats)
            i += 3
        elif music_string[i:i+5] == 'o|o.|o':
            result.append(beats[0])
            result.append(beats[1])
            result.append(beats[2])
            i += 4
    return result
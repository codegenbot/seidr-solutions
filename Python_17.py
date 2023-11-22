from typing import List


def parse_music(music_string: str) -> List[int]:
    try:
        notes = music_string.strip().split(":")
        if len(notes) == 0:
            return []
        return [4 if "o|" in note else 2 if "o" in note else 1 for note in notes]
    except AttributeError:
        return []
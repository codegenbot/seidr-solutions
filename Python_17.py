from typing import List


def parse_music(music_string: str) -> List[int]:
    return list(
        map(
            lambda note: 4 if note == "o" else 2 if note == "o|" else 1,
            music_string.strip().split(),
        )
    )
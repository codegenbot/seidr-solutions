```
import re


def parse_music(s):
    if not isinstance(s, str) or not s.strip():
        return []
    if not s:
        return []
    s = s.lower()
    beats = re.sub(r'[^\d\s]+', ' ', s).split()
    beat_counts = {}
    for i in range(0, len(beats), 2):
        try:
            beat_count = int(beats[i])
            count = int(beats[i+1])
            if str(beat_count) in beat_counts:
                beat_counts[str(beat_count)] += count
            else:
                beat_counts[str(beat_count)] = count
        except ValueError:
            return []
    try:
        max_beat = int(max(map(int, beat_counts.keys())))
    except ValueError:
        return []
    return [beat_counts.get(str(i), 0) for i in range(1, max_beat + 1)]
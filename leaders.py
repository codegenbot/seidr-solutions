def leaders(arr):
    max_seen = arr[-1]
    return [max_seen] + [x for x in reversed(arr) if x >= max_seen]

print(leaders([19, 748, 560, 43, 279, 439, 440, 462, 50, 715, 551, 459, 413, 60, 509, 829, 451, 362, 316, 680]))
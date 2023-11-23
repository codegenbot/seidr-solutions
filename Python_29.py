def filter_by_prefix(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

strings = input().split(",")
prefix = input().rstrip()

filtered_strings = list(filter_by_prefix(strings, prefix))

print(",".join(filtered_strings))
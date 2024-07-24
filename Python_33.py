def sort_third(l: list):
    return [sorted(l[i:i+3]) for i in range(0, len(l), 3])  # Sort each sublist of size 3
            + [item for sublist in [sorted(l[i:i+3]) for i in range(0, len(l), 3)] for item in sublist]  # Flatten the list
```
def find_common_letter(set1, set2):
    for letter in set1:
        if letter in set2:
            return letter
    return None
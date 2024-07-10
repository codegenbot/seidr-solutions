```
from collections import Counter

def is_happy(s):
    from collections import Counter
    for i in range(0, len(s), 3):
        substr = s[i:i + 3]
        counter1 = Counter(substr)
        for j in range(i + 3, len(s)):
            substr = s[j:j+3]
            if Counter(substr) != counter1:
                return False
    return True
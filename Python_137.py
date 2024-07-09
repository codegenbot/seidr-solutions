```
def compare_strings(s1: str, s2: str) -> str:
    if isinstance(s1, str) and isinstance(s2, str):
        n1 = s1.replace(',', '.').replace(' ', '').lower()
        n2 = s2.replace(',', '.').replace(' ', '').lower()

        if n1 > n2:
            return s1
        elif n2 > n1:
            return s2
        else:
            return None
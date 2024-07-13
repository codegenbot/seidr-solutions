def longest(strings: list[optional[str]]) -> optional[str]:
    def check() -> str:
        if not strings:
            return None
        max_len = 0
        result = ""
        for s in strings:
            if isinstance(s, str):
                if len(s) > max_len:
                    max_len = len(s)
                    result = s
        return result

    return check()
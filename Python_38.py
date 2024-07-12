groups = [s[-1] + s[:-1] if len(s) == 3 else s for s in groups]
    return "".join(groups)
def sort_third(l):
    result = []
    for i in range(len(l)):
        if i % 3 == 0:
            chunk = l[:i//3*3+3] if i // 3 * 3 + 3 <= len(l) else l[i//3*3:]
            result.append(sorted(chunk)[i%3]) if i < 9 else None
        else:
            result.append(l[i])
    return result
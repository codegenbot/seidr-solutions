def file_name_check(file_name):
    if "." in file_name:
        head, tail = file_name.rsplit(".", 1)
    else:
        return "No"

    if len([c for c in head if c.isdigit()]) > 3:
        return "No"

    if not head[0].isalpha():
        return "No"

    if set(tail.lower()) not in [
        {str(c).lower() for c in ["t", "x", "e", "l"]},
        {c.lower() for c in ["t", "x", "e", "l", "d"]},
    ]:
        return "No"

    return "Yes"
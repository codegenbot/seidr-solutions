def file_name_check(file_name):
    if len(file_name) > 0:
        parts = file_name.rsplit(".", 1)
        if (
            len(parts) == 2
            and parts[0][0].isalpha()
            and len([c for c in parts[0] if c.isdigit()]) <= 3
        ):
            ext = parts[1].lower()
            return "Yes" if ext in ["txt", "exe", "dll"] else "No"
    return "No"
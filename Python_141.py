def file_name_check(file_name):
    if file_name.count(".") != 1:
        return "No"

    name, ext = file_name.split(".")

    if not name or not name[0].isalpha():
        return "No"

    if ext not in ["txt", "exe", "dll"]:
        return "No"

    digit_count = sum(c.isdigit() for c in name)

    if digit_count > 3:
        return "No"

    return "Yes"
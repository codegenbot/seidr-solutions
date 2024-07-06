def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return "No"
    if "." not in file_name or file_name.count(".") != 1:
        return "No"
    before, after = file_name.split(".")
    if not before or not after in ["txt", "exe", "dll"]:
        return "No"
    return "Yes"
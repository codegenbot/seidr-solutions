def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return "No"
    if file_name.count(".") != 1:
        return "No"
    dot_index = file_name.index(".")
    if not file_name[:dot_index].isalnum():
        return "No"
    if file_name[:dot_index].lower()[0] < "a" or file_name[:dot_index].lower()[0] > "z":
        return "No"
    file_extension = file_name[dot_index + 1 :]
    if not file_extension in ["txt", "exe", "dll"]:
        return "No"
    return "Yes"
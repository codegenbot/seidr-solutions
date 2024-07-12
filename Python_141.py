def file_name_check(file_name):
    if "." in file_name:
        name, extension = file_name.rsplit(".", 1)
        return (
            len(name) > 0
            and name[0].isalpha()
            and sum(c.isdigit() for c in name) <= 3
            and extension in ["txt", "exe", "dll"]
        ) or "No"
    else:
        return sum(c.isdigit() for c in file_name) <= 3 or "No"
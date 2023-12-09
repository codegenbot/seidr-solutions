```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return "No"
    if "." not in file_name or file_name.count(".") != 1:
        return "No"
    name, ext = file_name.split(".")
    if not name or not ext in ["txt", "exe", "dll"]:
        return "No"
    return "Yes"
```
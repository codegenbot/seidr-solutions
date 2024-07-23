```
def file_name_check(file_name):
    if not all(c.isalpha() or c.isdigit() for c in file_name[:file_name.find('.')]):
        return 'No'
    if len([c for c in file_name[:file_name.find('.')] if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    ext = file_name[file_name.find('.') + 1:].lower()
    return 'Yes' if ext in ['txt', 'exe', 'dll'] else 'No'
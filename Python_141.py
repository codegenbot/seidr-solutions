```
def file_name_check(file_name):
    if not all(c.isalnum() or c == '.' for c in file_name):
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    if file_name[:file_name.index('.')] and not file_name[:file_name.index()].isalpha():
        return 'No'
    extension = file_name[file_name.index('.') + 1:].lower()
    valid_extensions = ['txt', 'exe', 'dll']
    if extension not in valid_extensions:
        return 'No'
    return 'Yes'
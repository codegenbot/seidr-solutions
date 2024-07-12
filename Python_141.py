```
def file_name_check(file_name):
    if not file_name.isalpha() and len([i for i in file_name if i.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    if not file_name[:file_name.index('.')] or not file_name[:file_name.index()].isalpha():
        return 'No'
    if not file_name[file_name.index('.') + 1:].lower() in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'
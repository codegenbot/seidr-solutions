def file_name_check(file_name):
    if len([i for i in file_name if i.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    name, ext = file_name.rsplit('.', 1)
    if not name[0].isalpha():
        return 'No'
    valid_extensions = ['txt', 'exe', 'dll']
    if ext.lower() not in valid_extensions:
        return 'No'
    return 'Yes'
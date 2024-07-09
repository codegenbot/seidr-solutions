````
def file_name_check(file_name):
    if len([i for i in file_name if i.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    name, ext = file_name.rsplit('.', 1)
    if not name.isalpha():
        return 'No'
    if ext.lower() not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'